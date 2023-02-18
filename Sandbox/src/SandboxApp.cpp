#include "Hathor.h"

class Sandbox : public Hathor::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Hathor::Application* Hathor::CreateApplication() {
	return new Sandbox();
}