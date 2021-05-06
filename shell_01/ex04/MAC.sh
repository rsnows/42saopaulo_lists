#!/bin/sh

ifconfig | grep ether | cut -c15- | awk 'NF-=3'