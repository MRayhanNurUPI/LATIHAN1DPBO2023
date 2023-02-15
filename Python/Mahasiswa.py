class Mahasiswa:

    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""

    def __init__(self, nama="", nim="", prodi="", fakultas=""):
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    def getNama(self):
        return self.__nama

    def getNIM(self):
        return self.__nim

    def getProdi(self):
        return self.__prodi

    def getFakultas(self):
        return self.__fakultas

    def setNama(self, nama):
        self.__nama = nama

    def setNIM(self, nim):
        self.__nim = nim

    def setProdi(self, prodi):
        self.__prodi = prodi

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
