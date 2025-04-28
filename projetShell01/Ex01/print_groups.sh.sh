#!/bin/bash
groups $FT_USER | cut -d' ' -f3- | tr ' ' ',' 
