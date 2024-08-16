#include<SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Snake");

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Window::Closed) {
				window.close();
			}
		}

		window.clear();
		window.display();
	}
}
