#include "Primal.h"

class Sandbox : public Primal::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


Primal::Application* Primal::CreateApplication()
{
	return new Sandbox();
}