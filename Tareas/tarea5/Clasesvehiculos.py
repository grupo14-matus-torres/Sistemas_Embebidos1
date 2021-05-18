#!/usr/bin/env puthon3
#_*_coding:UTF-8_*_

#CLASE PADRE
class Vehiculos:
    def __init__(self,marca=None,placa=None,color=None,modelo=None,kilometros=0,robado=False):
        self.marca=marca
        self.placa=placa
        self.color=color
        self.modelo=modelo
        self.kilometros=kilometros
        self.robado = robado

    def Cambiocolor(self):
        colornuevo=input("Ingrese un color:")
        self.color=colornuevo
        print(f"El nuevo color es: {self.color}. ")

    def addkilometros(self,nuevoskilometros):
        self.kilometros = self.kilometros + nuevoskilometros

    def vehiculorobado(self):
        self.robado = True
        print("Vehiculo robado")

    def __str__(self):
        return f"vehiculo {self.marca} de color {self.color}, modelo: {self.modelo}. Numero de placa:{self.placa}. Kilometros recorridos:{self.kilometros}"


    #CLASE A
class Buses(Vehiculos):
    def __init__(self,marca=None,placa=None,color=None,modelo=None,kilometros=0,sillas=0): # Parametros de la subclase
        Vehiculos.__init__(self,marca,placa,color,modelo,kilometros,robado=False) # Contructor clase padre
        self.sillas = sillas

    def __len__(self):
        return self.modelo

    def addsillas(self,numerodesillas):
        self.sillas = self.sillas + numerodesillas
        return('El Bus tiene {} sillas'.format(self.sillas))

    #CLASE B
class Motos(Vehiculos):
    def __init__(self,marca=None,placa=None,color=None,modelo=None,kilometros=0,cilindraje=None): # Parametros de la subclase
        Vehiculos.__init__(self,marca,placa,color,modelo,kilometros,robado=False) # Contructor clase padre
        self.cilindraje = cilindraje

    def __len__(self):
        return self.modelo

    def addcilindraje(self,xcilindraje):
        self.cilindraje = self.cilindraje + xcilindraje
        return('El cilindraje dela moto es {}.'.format(self.cilindraje))

    #CLASE AA
class Microbuses(Buses):

    def __init__(self,marca=None,placa=None,color=None,modelo=None,kilometros=0,sillas=0,peso=0,robado=False):
        Buses.__init__(self,marca,placa,color,modelo,kilometros,sillas)
        self.peso=peso
        self.robado = robado

    def vehiculorobado(self):
        self.robado = True
        print("Vehiculo robado")


    def addpeso(self,peso1):
        self.peso = self.peso + peso1
        return('El cilindraje dela moto es {}.'.format(self.peso))
