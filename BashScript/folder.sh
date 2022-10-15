#!/bin/bash
FOLDER=test
if [ -d "$FOLDER" ]; then
    echo "Directory Exists"
else
    echo "Directory Exists"
    mkdir "$FOLDER"
fi
