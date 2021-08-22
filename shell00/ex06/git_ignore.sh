#!/bin/sh
git status --ignored -s | grep ! | sed -e 's/.*[[:space:]]//'
