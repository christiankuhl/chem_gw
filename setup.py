import sys
from cx_Freeze import setup, Executable

import os
os.environ['TCL_LIBRARY'] = "C:\\Users\\chris\\AppData\\Local\\Programs\\Python\\Python37\\tcl\\tcl8.6"
os.environ['TK_LIBRARY'] = "C:\\Users\\chris\\AppData\\Local\\Programs\\Python\\Python37\\tcl\\tk8.6"


setup(name = "Chemisches Gleichgewicht",
      version = "1.0",
      description = "Eine Demonstration zum chemischen Gleichgewicht",
      executables = [Executable("chem.py", base = "Win32GUI")],
      options={"build_exe": {"packages": ["pygame", "random", "threading", "time"],
                             "include_msvcr": True,
                             "include_files": ["bg.png", "apple.gif"]}})
