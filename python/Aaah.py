text_jon = input()
text_doc = input()

jon_as = ['a' for x in text_jon if x == 'a']
doc_as = ['a' for x in text_doc if x == 'a']

if len(doc_as) > len(jon_as):
    print('no')
else:
    print('go')
