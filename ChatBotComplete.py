from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
import os
import speech_recognition as sr
import pyttsx3
 
 
bot = ChatBot('Bot')
bot.set_trainer(ListTrainer)
engine=pyttsx3.init()
engine.setProperty('voice','HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices\Tokens\TTS_MS_EN-US_ZIRA_11.0')
 
 
r=sr.Recognizer()
with sr.Microphone() as source:
    while True:
        print("speak anything: ")
        audio=r.listen(source,timeout=2,phrase_time_limit=4)
        try:
            text=r.recognize_google(audio,language='en-IN')
        except:
            text='Sorry'
        print(text)
        reply=bot.get_response(text)
        if(text!='bye'):
            reply = bot.get_response(text)
           
        if(text == 'bye'):
            print('Neelu: Bye')
            engine.say('bye')
            engine.runAndWait()
            break
         
        print('Neelu : ',reply)
        engine.say(reply)
        engine.runAndWait()
