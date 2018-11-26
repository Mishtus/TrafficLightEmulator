PROJECT_NAME := TrafficLightEmulator

BUILD_DIR := _build
BINARY_DIR := _binary

BUILD_PARAMETERS := -DCMAKE_CXX_COMPILER=g++ -DCMAKE_BUILD_TYPE=Release

all:
	mkdir $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake $(BUILD_PARAMETERS) .. && make -j$(nproc)
	cd $(BUILD_DIR) && mkdir $(BINARY_DIR)
	cp $(BUILD_DIR)/$(PROJECT_NAME)/$(PROJECT_NAME) $(BUILD_DIR)/$(BINARY_DIR)

clean:
	rm -rf $(BUILD_DIR)/