"""Noesis Python Plugin

      File: fmt_sh4_ps2_bin.py
   Authors: Laurynas Zubavičius (Sparagas)
            Rodolfo Nuñez (roocker666)
   Purpose: Silent Hill 4: The Room (Sony - PlayStation 2)
  Category: 
 File Mask: *.bin
  ID Bytes: 
"""

from inc_noesis import *

from inc_sh4_bin import *


def registerNoesisTypes():
    handle = noesis.register("Silent Hill 4: The Room (PS2)", ".bin")
    noesis.setHandlerTypeCheck(handle, check_type)
    noesis.setHandlerLoadRGBA(handle, load_rgba)
    return 1


def check_type(data):
    if len(data) < 4:
        return 0
    return 1


def load_rgba(data, tex_list):
    sh4_bin(data, tex_list, 'PS2')
    return 1
