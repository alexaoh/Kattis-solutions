text = input()
input_list = list(text)
output = ""
#print(input_list)
for letter in input_list:
    if letter.isupper() == True:
        output += letter

print(output)
