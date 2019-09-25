#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/EduCoin.ico

convert ../../src/qt/res/icons/EduCoin-16.png ../../src/qt/res/icons/EduCoin-32.png ../../src/qt/res/icons/EduCoin-48.png ${ICON_DST}
