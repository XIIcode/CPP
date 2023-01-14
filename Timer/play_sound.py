import winsound as ws
import keyboard
print("\nLong Press q to quit")
while not keyboard.is_pressed("q"):
    ws.PlaySound("tc.wav",ws.SND_FILENAME)
    


