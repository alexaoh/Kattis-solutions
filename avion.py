output_streng = ""
for i in range(1,6):
    line = input()
    if "FBI" in line:
        output_streng += str(i)
        output_streng += " "

if output_streng == "":
    print("HE GOT AWAY!")
else:
    print(output_streng)
