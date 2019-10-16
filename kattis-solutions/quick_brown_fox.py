import string

tol = int(input())
alph = string.ascii_lowercase

print(alph)

for i in range(tol):
    text = input().lower().replace(",","").replace(" ","")
    text = filter(lambda x: x.isalpha(), text) #får ut rar output https://stackoverflow.com/questions/12851791/removing-numbers-from-string
    print(text)
    letters = [char for char in text]
