idf_component_register(
    SRCS "main.cpp" "neural/model/model.cpp" "neural/neural.cpp"
    INCLUDE_DIRS ""
    REQUIRES esp-tflite-micro driver
)