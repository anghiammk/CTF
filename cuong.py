import Adafruit_DHT
import RPi.GPIO as GPIO
import time
chon_cam_bien = Adafruit_DHT.DHT11
GPIO.setmode(GPIO.BCM)
pin_sensor = 25

do_am, nhiet_do = Adafruit_DHT.read_retry(chon_cam_bien, pin_sensor)
if do_am is not None and nhiet_do is not None:
	print ("{0:0.0f}-{1:0.0f}").format(nhiet_do, do_am)
else:
	print("@@-@@")