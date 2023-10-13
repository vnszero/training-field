A = 65
Z = 90
a = 97
z = 122
zero = 48
nine = 57
while(True):
    try:
        password = input().replace(' ','#').replace('\r','$').replace('\n','-')
        there_is_upper_case = False
        there_is_lower_case = False
        there_is_number = False
        already_notified = False
        if len(password)-1 >= 6 and len(password)-1 <= 32:
            for i in range(len(password)):
                if ord(password[i]) >= A and ord(password[i]) <= Z:
                    there_is_upper_case = True
                elif ord(password[i]) >= a and ord(password[i]) <= z:
                    there_is_lower_case = True
                elif ord(password[i]) >= zero and ord(password[i]) <= nine:
                    there_is_number = True
                else:
                    print("Senha invalida.")
                    already_notified = True
                    break
            if there_is_lower_case and there_is_upper_case and there_is_number:
                print("Senha valida.")
            elif not already_notified:
                print("Senha invalida.")
        else:
            print("Senha invalida.")
    except:
        break