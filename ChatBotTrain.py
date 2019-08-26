from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
import os
 
bot = ChatBot('Bot')
bot.set_trainer(ListTrainer)
 
 
 
for files in os.listdir('C:/Users/hp/AppData/Local/Programs/Python/Python36/chatterbot-corpus-master/chatterbot_corpus/data/english/'):
    data = open('C:/Users/hp/AppData/Local/Programs/Python/Python36/chatterbot-corpus-master/chatterbot_corpus/data/english/' + files,'r').readlines()
    bot.train(data)
 
while True:
    if(message.strip()!=="bye")
        message=input("Speak anything: ")
        reply=bot.get_response(message)
        print("Neelu: ",reply)
    if(message.strip()=="bye"):
        print("Neelu: bye")
