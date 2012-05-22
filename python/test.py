import serial
ser = serial.Serial('/dev/tty.usbserial-A900aede', 9600)
while 1:
  ser.readline()
# ser.write('5')
