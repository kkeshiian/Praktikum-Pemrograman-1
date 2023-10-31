detikInput = int(input())

day = (detikInput % (86400*30))/86400
hour = (detikInput % 86400/3600)
minute = (detikInput % 3600)/60
secon = (detikInput % 60)

if (day >= 1):
    print("%d hari %.2d : %.2d : %.2d" % (day, hour, minute, secon))
else:
    print("%.2d : %.2d : %.2d" % (hour, minute, secon))
