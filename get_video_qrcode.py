import os
import qrcode
bwave_zoom_code = qrcode.make("https://jworg.zoom.us/j/83668699946?pwd=YllDeDNiTDNCdVhQendTeElQcUc4Zz09")
bwave_zoom_code.save("qr.png", "PNG")
os.system("start qr.png")