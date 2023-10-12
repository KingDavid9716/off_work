print()
# what the program does
print(f"Hi, so this is a miniDictionary that tells you who I think You are")
print()
# dictionary of names and meaaning
persons = {"DAVID": "A Great Doctor and a full time Software Engineer. He is a great lover of God",
              "NENNY": "A Great IT Woman and a wonderful Software Engineer",
              "ABBAS": "A Geat Individual who can be discrete but a perceived business man and a great programmer",
              "BWAVE": "A wonderful Tutor who passionately loves this tech thing and tries his best to impart other. He's a great fella",
              "ELDER FINEBOY": "A hyper individual who identifies as a fine boy. He's a good lad and has a promising future",
              "UNWANA NYONG": "A very reserved individual who loves to grow in secret and storm the world",
              "BELIEVE": "A Great guy but I doubt He's Nigerian. He looks South African"}
# get user input
individual = input("Enter name for meaning: ")
# convert all cases user may have typed to uppercase to suit what is in the dictionary
individual = individual.upper()
# check if name is in the dictionary and execute accordingly
if individual in persons:
    meaning = persons[individual]
    print(f"{meaning}")
else:
    print(f"sorry folk. Dm King David to add yours")    
