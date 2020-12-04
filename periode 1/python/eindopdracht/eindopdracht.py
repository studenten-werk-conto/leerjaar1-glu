
import json
import requests
woord = input ("elk synoniem wil je weten? > ")
vraag = requests.get("https://api.datamuse.com/words?ml="+woord)
gegevens = vraag.json()
for x in gegevens:
    print(x['word'])

# print(gegevens)
# print(type(gegevens))
