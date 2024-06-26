#pragma once
class CRectangle
{
public:
	CRectangle();
	~CRectangle();
	void SetLongueur(float L);
	void SetLargeur(float l);
	void SetRectangle(float L, float l);
	float CalculSurface();
	CRectangle operator+(CRectangle& a);
	float GetLongueur();
	float GetLargeur();
private:
	float m_Longueur;
	float m_Largeur;
};
