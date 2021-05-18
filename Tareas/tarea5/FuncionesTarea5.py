#!/usr/bin/env python3
# -*- coding:UTF-8 -*-

def area_circulo(radio):
    
    return (radio**2)*3.14 


def Nombre (nombre):
    for i in range(0,1000):
        i+=1
    print(str(nombre),[i])


def Mas_joven(x,y):
    if x>y:
        print("la segunda persona es mas joven.")
        return
    elif x<y:
        print("La primera persona es mas joven.")
        return
    else:
        print("Las personas tienen la misma edad.")
        return

def Nenteros(x,y):
    if y == pow(x,2):
        print("El segundo es el cuadrado exacto del primero")
    elif y<pow(x,2):
        print("El segundo es menor que el cuadrado del primero")
    elif y>pow(x,2):
        print("El segundo es mayor que el cuadrado del primero")


from decimal import *
import os
import math
def decimalespi(decimales=1500):

    getcontext().prec=decimales
    anterior=0
    k=0
    r=0
    potencias = Decimal(1)
    while True:
        r += Decimal(4/(8*k+1) - 2/(8*k+4) - 1/(8*k+5) - 1/(8*k+6))/potencias
        k += 1
        potencias *= 16
        os.system("clear")


        if anterior == r: break
        anterior = r
    return r


def varAvarB(varA,varB):
        if type(varA)==str and type(varB)==str:
            print("String involucrados")
            if len(varA)==len(varB):
                print("Igual")
            elif len(varA)>len(varB):
                print("Mas grande")
            else:
                print("mas pequeño")
        else:
            if varA==varB:
                print("Igual")
            elif varA>varB:
                print("Mas grande")
            else:
                print("mas pequeño")


def sumadenumero(n):
    i=0
    for x in range(1,n+1):
        i+=x
        if x == (n):
            print(i)
