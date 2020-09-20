# imports at the top of the file
import datetime
import time

# example of assignments
now = int(round(time.time() / 3600))   # this is in epoch time
formatted_now = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')

print("\nHours since January 1, 1970 = {} (epoch time)\n\n".format(now));

# getting today's date/time

print("Right now the time is {}\n".format(formatted_now));
