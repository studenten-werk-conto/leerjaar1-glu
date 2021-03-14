
import json
import requests
woord = input ("van welk profiel wil je data opvragen? > ")
vraag = requests.get("http://www.192.168.178.98:3000/homepage.php?guid="+woord)
gegevens = vraag.json()
# for x in gegevens:
#     print(x['word'])

print(gegevens)
# print(type(gegevens))
