import os
restart =  input("restart?(yes/no):")
if restart == 'no':
    exit()
else :
    os.system("shutdown /r /t 1")
