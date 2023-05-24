#!/usr/bin/env python3
import os
os.system('sudo powermetrics --samplers smc |grep -i "CPU die temperature"')
