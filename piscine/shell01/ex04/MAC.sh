#!/bin/sh
ifconfig | grep '..:..:..:..:..:..' | awk '{print $2}'
