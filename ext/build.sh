#!/bin/bash

#PROCESSOS=$(lscpu --online --parse=CPU|grep -v "#"|wc -l)
PROCESSOS=8
COMANDO=$1

if [ "$#" -ge 1 ]
then
    if [[ "${COMANDO}" == "clean" ]]
    then
        if [ -e "./Makefile" ]
        then
            cmake --build . -- clean
        fi
        cd ..
        rm -rf build
        mkdir build
    else
        if [[ "${COMANDO}" == "build-tests" ]]
        then
            cmake --build . --parallel ${PROCESSOS} --
        else
            if [[ "${COMANDO}" == "test" ]]
            then
                ctest --verbose --output-on-failure .
            else
                if [[ "${COMANDO}" == "doc" ]]
                then
                   cmake --build . -- doc
                else
                    echo "Command not found: ${COMANDO}"
                fi
            fi
        fi
    fi
else
    cmake --build .
fi
