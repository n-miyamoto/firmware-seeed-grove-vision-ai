FILENAME=firmware$(date +"%Y-%m-%d_%H-%M-%S").uf2

cd Synopsys_PA8535_EM9D_DFSS_SDK_3.3
make 
make flash
python3 tools/ufconv/uf2conv.py -t 0 -c tools/image_gen_cstm/output/output.img -o ../firm/$FILENAME
