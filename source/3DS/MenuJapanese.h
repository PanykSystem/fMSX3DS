/* You must save this file as UTF-8 to display correct Japanese. */
static std::map<std::string, std::string> TextJPMap =
{
	{"On","オン"},
	{"Off","オフ"},
	{"OK","はい"},
	{"Cancel","いいえ"},
	{"Select","選択"},
	{"Open","開く"},
	{"Back","戻る"},
	{"[Reset]","[リセット]"},
	{"[File Open]","[ファイルを開く]"},
	{"[LoadROM(Slot1)]","[ROMを読み込む（スロット1）]"},
	{"[LoadROM(Slot2)]","[ROMを読み込む（スロット2）]"},
	{"[Load Konami SCC+ ROM]","[コナミSCC+ ROMを読み込む]"},
	{"[Load Ese SCC 512k ROM]","[似非SCC(512k)ROMを読み込む]"},
	{"[Load Ese RAM 512k ROM]","[似非RAM(512k)ROMを読み込む]"},
	{"[Change ROM Mapper]","[ROMマッパーを変更する]"},
	{"[Eject ROM]","[ROMを取り出す]"},
	{"[Apply IPS Patch]","[IPSパッチを適用する]"},
	{"[LoadDisk(DriveA)]","[ディスクを読み込む（ドライブA）]"},
	{"[LoadDisk(DriveB)]","[ディスクを読み込む（ドライブB）]"},
	{"[SaveDisk(DriveA)]","[ディスクを保存（ドライブA）]"},
	{"[SaveDisk(DriveB)]","[ディスクを保存（ドライブB）]"},
	{"[Create New Disk]","[新規ディスクを作成]"},
	{"[Eject Disk]","[ディスクを取り出す]"},
	{"[Load der file]","[derファイルを読み込む]"},
	{"[Load Cassette Tape]","[カッセトテープを読み込む]"},
	{"[Load SaveDATA Cassette Tape]", "[セーブ用カッセトテープを読み込む]"},
	{"[Create new SaveDATA Cassette Tape]","[新規セーブ用カセットテープを作成]"},
	{"[Rewind Cassette Tape]","[カッセトテープを巻き戻す]"},
	{"[State Load]","[ステートを読み込む]"},
	{"[State Save]","[ステートを保存]"},
	{"[KeyConfig]","[キー設定]"},
	{"[Option]","[オプション]"},
	{"[Load Screen Shot]","[スクリーンショットを読み込む]"},
	{"[Load Screen Shot](Show Keyboard)","[スクリーンショットを読み込む](キーボードを表示)"},
	{"[Save Screen Shot]","[スクリーンショットを保存]"},
	{"[Load Reference Image]","[参照画像を表示]"},
	{"[Load Reference Image](Overlay)","[参照画像を表示]（オーバーレイ）"},
	{"[Adjust Reference Image]","[参照画像を調節]"},
	{"[Close Reference Image]","[参照画像を閉じる]"},
	{"[Fast Forward]","[早送り]"},
	{"[OverClockR800(Unsafe)]","[R800のオーバークロック(非推奨)]"},
	{"[Cheat]","[チート]"},
	{"[Quit fMSX]","[fMSXを終了する]"},
	{"Config","[設定]"},
	{"JoyPort A","ジョイスティックポートA"},
	{"JoyPort B","ジョイスティックポートB"},
	{"Printer Port", "プリンターポート"},
	{"Japanese","日本語"},
	{"Auto","自動"},
	{"[Default Value]","[初期値]"},
	{"[Back]", "[戻る]"},
	{"None","無し"},
	{"JoyStick","ジョイスティック"},
	{"Mouse as Joystick","マウスをジョイスティックとして使用"},
	{"Mouse","マウス"},
	{"ShowFPS","FPSを表示"},
	{"<Emulation Option>","<エミュレーション設定>"},
	{"Use V9990","V9990を使用する"},
	{"Machine Region","地域"},
	{"C-BIOS Region","C-BIOSの地域"},
	{"Force C-BIOS","強制的にC-BIOSを使用する"},
	{"Force Japanese BIOS","日本語のBIOSを使用する"},
	{"Skip MSX2 Plus boot screen","MSX2+の起動画面を省略"},
	{"Keyboad Region","キーボードの地域"},
	{"Frame Limit","FPSを制限"},
	{"Patch Disk ROM","ディスクROMにパッチを当てる"},
	{"<Graphic Option>","<グラフィック設定>"},
	{"3D Stereoscopic mode","3D立体視"},
	{"800px wide mode","800pxワイドスクリーン"},
	{"Screen Strech","スクリーン拡大"},
	{"Use Interlace","インターレースを使用"},
	{"Use Double Buffer","ダブルバッファを使用"},
	{"<3DS Option>","<3DSオプション>"},
	{"Load  a file when Startup","起動時にファイルを読み込む"},
	{"Memory systemmenu cursor","システムメニューのカーソル記憶"},
	{"Menu select speed","メニュー選択の速度"},
	{"Scroll Text","テキストをスクロールさせる"},
	{"New3DS Boost","New 3DSで高速化"},
	{"ScreenShot Transparent","スクリーンショットの透明度"},
	{"<Sound Option>","<サウンドオプション>"},
	{"Use FM Sound(Ym2413)","FMサウンド(YM2413)"},
	{"Use FM Sound(Y8950)","FMサウンド(Y8950)"},
	{"<Input/Output Hardware Option>","<入力・出力装置の設定>"},
	{"<Advanced Sound Option>","<サウンドの高度な設定>"},
	{"Force SCC Plus","強制的にSCC Plusにする"},
	{"PSG Quality","PSGの品質"},
	{"SCC Qualty","SCCの品質"},
	{"YM2413 Quality","YM2413の品質"},
	{"Sound Volume","音量"},
	{"0(Silent)","0(無音)"},
	{"10(Normal)","10(標準)"},
	{"15(Maximum)","15(最大)"},
	{"x2(Unsafe)","x2(非推奨)"},
	{"x4(Unsafe)","x4(非推奨)"},
	{"<Unsafe Actions>","<要注意なアクション>"},
	{"[Select a ROM file]","[ROMファイルを選択してください]"},
	{"[Select a Disk Image]","[Diskイメージを選択してください]"},
	{"[Select a cassette tape image]","[カッセトテープを選択してください]"},
	{"[Select a cheat file]","[チートファイルを選択してください]"},
	{"[Select a IPS patch file]","[IPSパッチを選択してください]"},
	{"[Select a reference image file]","[参照画像を選択してください]"},
	{"[Select a file]","[ファイルを選択してください]"},
	{"Press any key to continue.","何かキーを押してください"},
	{"Saving screenshot.Please Wait.","スクリーンショットを保存しています。"},
	{"Delete old files and override?","古いファイルを消して上書きしますか？"},
	{"Dou you want to Reset?","リセットしますか？"},
	{"Enter the name of new disk.","新しいディスクの名前を入力してください"},
	{"You cancel creating the new disk.","ディスク作成をキャンセルしました"},
	{"You Created a New Disk.","新しいディスクを作成しました。"},
	{"Do you want to Insert that?","これを挿入した状態にしますか？"},
	{"      [Select a file in th zip archive.]","[ZIP内のファイルを選択してください]"},
	{"[Frequently Used Folder]","[よく使用するフォルダー]"},
	{"[Clear Recently Used File List]","[ファイル履歴を消去する]"},
	{"[Load Recently Used]","[ファイル履歴から読み込む]"},
	{"Clear Recently Used List", "ファイル履歴を消去します"},
	{"Do you want to delete this from the list?","これをリストから消去しますか？"},
	{"Are you sure?","本当に実行しますか？"},
	{"[Start with no cartridge.]","[カートリッジ無しで起動]"},
	{"[Parent Directory]","[一つ前のディレクトリ]"},
	{"[Create Blank Disk]","[空のディスクを作成]"},
	{ "[V9990 Dual Screen]","[V9990の2画面表示]"},
	{"This option requires Restarting the emulator.","再起動が必要なオプションを変更しました"},
	{"Quit fMSX3DS and restart to enable that.","変更はfMSX3DS終了後、再起動時に有効になります。"},
	{"        [Select Reset Hardware]","  [リセットする本体を選択してください]"},
	{"This option requires reset the MSX.","MSXのリセットが必要なオプションを変更しました"},
	{"Select [Reset] in the menu to reset.","メニューから[リセット]を選んでください。"},
	{"[Hardware Rest(MSXTR)]","[ハードウェアリセット(MSXTurboR)]" },
	{"[Software Reset(MSXTR)]" ,"[ソフトウェアリセット(MSXTurboR)]"},
	{"[Hardware Rest(MSX2+)]","[ハードウェアリセット（MSX2+）]"},
	{"[Software Reset(MSX2+)]","[ソフトウェアリセット（MSX2+）]"},
	{"[Hardware Rest(MSX2)]","[ハードウェアリセット（MSX2）]"},
	{"[Software Reset(MSX2)]","[ソフトウェアリセット（MSX2）]"},
	{"[Hardware Rest(MSX1)]","[ハードウェアリセット（MSX1）]"},
	{"[Software Reset(MSX1)]","[ソフトウェアリセット（MSX1）]"},
	{"This ROM doesn't work on MSXTurboR.","このROMはMSXTurboRでは動作しません"},
	{"MSXTurboR doesn't support cassette tapes.","MSXTurboRではカセットテープは動作しません"},
	{"<MSX0 Option>","<MSX0のオプション>"},
	{"Use MSX0","MSX0を使用"},
	{"Load X-BASIC2","べーしっ君プラスを読み込む"},
	{"MSX0 Analog Output","MSX0アナログ出力"},
	{"Change MSX Hardware Model and try again.","MSXの本体を変更してやり直してください。"},
	{"No memory for read the ZIP file directly.","ZIPファイルを直接読み込むためのメモリが足りません。"},
	{ "Extract the ZIP file to the SD card?" ,"SDカードに解凍しますか？"},
	{ "Extracting the file now.","解凍中です"},
	{ "Please Wait.", "しばらくお待ちください。"},
	{"[Rapidfire Setting]","[連射設定]"},
	{"        [Browse Keyconfig]","        [キー設定]"},
	{"[Assign 3DS Pad as Joystick]","[3DSパッドをジョイスティックに割り当て]"},
	{"[Assign 3DS Pad as Cursor keys]","[3DSパッドをカーソルキーに割り当て]"},
	{"[Assign 3DS Pad as Numpads]","[3DSパッドをテンキーに割り当て]"},
	{"[Custom Keyconfig]","[カスタム設定]"},
	{"Change the all key bindings for 3DS Pad.","3DSパッドに割り当てるキーを全て変更します"},
	{"[Reset Default]","[初期設定に戻す]"},
	{"You load a save state.","ステートを読み込みました"},
	{"You save a save state.","ステートを保存しました"},
	{"Press any key or touch screen to resume." ,"画面にタッチするか何かキーを押すと再開します"},
	{"Do you want to enter fast forward mode?","早送りモードにしますか？"},
	{"fMSX3DS running on fast forward mode now.","早送りモードで動作しています。"},
	{"Load the ROM to patched, first.","パッチを当てるROMを先に読み込んでください。"},
	{"You press the Home Button.","HOMEボタンが押されました。"},
	{"Do you want to Quit to home menu?","HOMEへと戻りますか？"},
	{"Press any key or touch screen to end.","画面にタッチするか何かキーを押すと終了します。"},
	{"Do you want to continue?","よろしいですか？"},
	{ "Use pad to move reference image.","パッドを押すと参照画像が移動します。"},
	{ "Use L or R key to change scale.","L、Rキーを押すと参照画像のサイズを変更します。"},
	{ "Use X or Y key to chnage transparent.","X、Yキーを押すと参照画像の透明度を変更します。"},
	{ "Press B or start to exit.","スタートキーかBキーで終了します。"}
};
