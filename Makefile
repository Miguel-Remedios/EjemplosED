.PHONY: clean All

All:
	@echo "----------Building project:[ Ejemplo07 - Debug ]----------"
	@cd "Ejemplo07" && "$(MAKE)" -f  "Ejemplo07.mk"
clean:
	@echo "----------Cleaning project:[ Ejemplo07 - Debug ]----------"
	@cd "Ejemplo07" && "$(MAKE)" -f  "Ejemplo07.mk" clean
