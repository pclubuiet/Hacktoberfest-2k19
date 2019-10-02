import os
import platform

if platform.system() == 'Linux' or platform.system() == 'Darwin':
    os.system("sudo shutdown -h now")
elif platform.system() == 'Windows':
    os.system("shutdown -s")
