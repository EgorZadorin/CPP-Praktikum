.PHONY: clean All

All:
	@echo "----------Building project:[ CPPP1 - Debug ]----------"
	@cd "CPPP" && "$(MAKE)" -f  "CPPP1.mk"
clean:
	@echo "----------Cleaning project:[ CPPP1 - Debug ]----------"
	@cd "CPPP" && "$(MAKE)" -f  "CPPP1.mk" clean
