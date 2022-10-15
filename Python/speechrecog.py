import speech_recognition as sr 
AUDIO_FILE=("abc.waav")
r=sr.Recognizer()
with sr.AudioFile(AUDIO_FILE) as source:
    record=r.record(source)
try:
    print(r.recognition_google(record))
except sr.UnknownValueError:
    print("Audio is not recognised")
except sr.RequestError:
    print("Invalid")
    
