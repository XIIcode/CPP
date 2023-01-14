import winsound as ws
import keyboard
print("\nPress q to quit")
while True:
    if keyboard.is_pressed("q"):
        break
    ws.PlaySound("tc.wav",ws.SND_FILENAME)
    


