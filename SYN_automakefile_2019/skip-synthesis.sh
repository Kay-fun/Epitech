#!/usr/bin/env bash
##
## EPITECH PROJECT, 2020
## skip_synthesis.sh
## File description:
## skip_synthesis.sh
##

#!/bin/tcsh

awk '{print $3,"\t",$9}' | grep \ $1