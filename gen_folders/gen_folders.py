from pprint import pprint
import os
import shutil
import glob

folders = []
with open("input", mode="r") as f:
    folders = [f"{i+1:03}_{line.lower().replace(' ', '_').strip()}" for i, line in enumerate(f.readlines())]

for f in folders:
    if not os.path.isdir(f"/home/eoino/dev/cp/cses/{f}"):
        os.mkdir(f"/home/eoino/dev/cp/cses/{f}")
        for fil in glob.glob("/home/eoino/dev/cp/template/*"):
            print(f)
            shutil.copy(fil, f"/home/eoino/dev/cp/cses/{f}/")
