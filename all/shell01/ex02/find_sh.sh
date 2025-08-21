#!/bin/bash
find . -iname "*.sh" -exec basename {} \; | sed "s/\.sh//g"
