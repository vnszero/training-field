class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
    
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        root_x = self.find(x)
        root_y = self.find(y)
        
        if root_x == root_y:
            return
        
        if self.rank[root_x] < self.rank[root_y]:
            self.parent[root_x] = root_y
        elif self.rank[root_x] > self.rank[root_y]:
            self.parent[root_y] = root_x
        else:
            self.parent[root_y] = root_x
            self.rank[root_x] += 1


def main():
    N, K = map(int, input().split())
    uf = UnionFind(N+1)
    
    for _ in range(K):
        op, a, b = input().split()
        if op == 'F':
            uf.union(int(a), int(b))
        elif op == 'C':
            if uf.find(int(a)) == uf.find(int(b)):
                print('S')
            else:
                print('N')

if __name__ == "__main__":
    main()