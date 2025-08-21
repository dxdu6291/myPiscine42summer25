#!/bin/bash

ifconfig -a | grep -Ewo '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}'
