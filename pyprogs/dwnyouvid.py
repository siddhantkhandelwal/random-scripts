import youtube_dl
ydl_opts = {}
fil = raw_input("Enter File Name: ")
if (fil):
    addfile = open(fil)
    add = addfile.readline()
    while add:
        with youtube_dl.YoutubeDL(ydl_opts) as ydl:
            ydl.download([add])
        add = addfile.readline()
