import sys
from cx_Freeze import setup, Executable

# Dependencies are automatically detected, but it might need fine tuning.
build_exe_options = {"packages": ["pygame", "random", "threading", "time"],
                     "excludes": []}

# GUI applications require a different base on Windows (the default is for a
# console application).
base = None
if sys.platform == "win32":
    base = "Win32GUI"

setup(  name = "Chemisches Gleichgewicht",
        version = "0.1",
        description = "Eine Demonstration zum chemischen Gleichgewicht",
        options = {"build_exe": build_exe_options},
        executables = [Executable("chem.py", base=base)])
