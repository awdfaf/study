import pywebcopy

from pywebcopy import save_webpage
save_webpage(
      url="http://cloudpick.love/dashboard/bigpie/realtime",
      project_folder="C:\코딩\git\개인\myweb",
      project_name="my_site",
      bypass_robots=True,
      debug=True,
      open_in_browser=True,
      delay=None,
      threaded=False,
)