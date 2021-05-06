#!/bin/sh

find . -name "*.sh" -execdir echo {} ';' | sed -e 's|^./||' | sed -e 's/.sh$//'