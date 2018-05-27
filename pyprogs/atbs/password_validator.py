import re, sys, os
if len(sys.argv) < 2:
    print("Syntax: python password_validator [password]+")
    exit()

flag = 0

password = sys.argv[1]
    
password_regex_length = re.compile(r'.{8,}')
match = password_regex_length.search(password)
##print(match)
if not match:
    print("Not a strong one. Min. 8 characters required for a strong password")
    flag=1;

password_regex_uppercase = re.compile(r'[A-Z]+')
match = password_regex_uppercase.search(password)
#print(match)
if not match:
    print("Not a strong one. Atleast one uppercase character required")
    flag=1

password_regex_lowercase = re.compile(r'[a-z]+')
match = password_regex_lowercase.search(password)
#print(match)
if not match:
    print("Not a strong one. Atleast one lowercase character required")
    flag=1

password_regex_numeric = re.compile(r'[0-9]+')
match = password_regex_numeric.search(password)
#print(match)
if not match:
    print("Not a strong one. Atleast one numeric character required")
    flag=1

if flag==0:
    print("Great choice of password!")