class Planta
{
private:
	int Correlativo (int tipoPlanta);
	bool PlantaDuplicada(int tipoPlanta, std::string nombre);
public:
	void RegistrarPlanta(int tipoPlanta);
	void MostrarPlantas(int tipoPlanta);
	void ModificarPlanta(int tipoPlanta);
	void CambioEstado(int tipoPlanta);
	void CambioEstado(int tipoPlanta, bool alta);
};