SELECT 
    stats.name AS name,
    COUNT(stats.name) AS matches,
    SUM(CAST(stats.victories AS INT)) AS victories,
    SUM(CAST(stats.defeats AS INT)) AS defeats,
    SUM(CAST(stats.draws AS INT)) AS draws,
    (SUM(CAST(stats.victories AS INT))*3) + (SUM(CAST(stats.draws AS INT))*1) AS score
FROM (
    SELECT 
        teams.name AS name, 
        teams.id AS id, 
        matches.team_1_goals > matches.team_2_goals AS victories,
        matches.team_1_goals < matches.team_2_goals AS defeats,
        matches.team_1_goals = matches.team_2_goals AS draws
    FROM teams
    JOIN matches ON matches.team_1 = teams.id
    UNION ALL
    SELECT 
        teams.name AS name, 
        teams.id AS id, 
        matches.team_2_goals > matches.team_1_goals AS victories, 
        matches.team_2_goals < matches.team_1_goals AS defeats, 
        matches.team_2_goals = matches.team_1_goals AS draws 
    FROM teams
    JOIN matches ON matches.team_2 = teams.id
) AS stats
GROUP BY stats.name
ORDER BY score DESC;
