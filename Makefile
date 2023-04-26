.PHONY: clean All

All:
	@echo "----------Building project:[ CPPP_G - Debug ]----------"
	@cd "CPPP_G" && "$(MAKE)" -f  "CPPP_G.mk"
clean:
	@echo "----------Cleaning project:[ CPPP_G - Debug ]----------"
	@cd "CPPP_G" && "$(MAKE)" -f  "CPPP_G.mk" clean
